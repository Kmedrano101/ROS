
(cl:in-package :asdf)

(defsystem "practicas-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "tipo_servicio" :depends-on ("_package_tipo_servicio"))
    (:file "_package_tipo_servicio" :depends-on ("_package"))
  ))