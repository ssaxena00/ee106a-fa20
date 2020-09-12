
(cl:in-package :asdf)

(defsystem "lab2_turtlesim-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "VelocityControl" :depends-on ("_package_VelocityControl"))
    (:file "_package_VelocityControl" :depends-on ("_package"))
  ))