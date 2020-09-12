;; Auto-generated. Do not edit!


(when (boundp 'my_chatter::TimestampString)
  (if (not (find-package "MY_CHATTER"))
    (make-package "MY_CHATTER"))
  (shadow 'TimestampString (find-package "MY_CHATTER")))
(unless (find-package "MY_CHATTER::TIMESTAMPSTRING")
  (make-package "MY_CHATTER::TIMESTAMPSTRING"))

(in-package "ROS")
;;//! \htmlinclude TimestampString.msg.html


(defclass my_chatter::TimestampString
  :super ros::object
  :slots (_user_input _timestamp ))

(defmethod my_chatter::TimestampString
  (:init
   (&key
    ((:user_input __user_input) "")
    ((:timestamp __timestamp) 0.0)
    )
   (send-super :init)
   (setq _user_input (string __user_input))
   (setq _timestamp (float __timestamp))
   self)
  (:user_input
   (&optional __user_input)
   (if __user_input (setq _user_input __user_input)) _user_input)
  (:timestamp
   (&optional __timestamp)
   (if __timestamp (setq _timestamp __timestamp)) _timestamp)
  (:serialization-length
   ()
   (+
    ;; string _user_input
    4 (length _user_input)
    ;; float32 _timestamp
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _user_input
       (write-long (length _user_input) s) (princ _user_input s)
     ;; float32 _timestamp
       (sys::poke _timestamp (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _user_input
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _user_input (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float32 _timestamp
     (setq _timestamp (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get my_chatter::TimestampString :md5sum-) "cd8d55f18a8a1cd99f645365a674c384")
(setf (get my_chatter::TimestampString :datatype-) "my_chatter/TimestampString")
(setf (get my_chatter::TimestampString :definition-)
      "string user_input
float32 timestamp

")



(provide :my_chatter/TimestampString "cd8d55f18a8a1cd99f645365a674c384")


