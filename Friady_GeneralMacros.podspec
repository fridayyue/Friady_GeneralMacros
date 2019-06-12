#
#  Be sure to run `pod spec lint Friady_GeneralMacros.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
	s.name                = "Friady_GeneralMacros"
	s.version             = "0.0.6"
  	s.summary             = "general macros for iOS"
	s.homepage            = "https://github.com/fridayyue/Friady_GeneralMacros"
 	s.license             = "MIT"
  	s.author              = { "yueFriday" => "yuefriday@163.com" }
  	s.platform            = :ios, "7.0"
  	s.source              = { :git => "https://github.com/fridayyue/Friady_GeneralMacros.git", :tag => "0.0.6" }
  	s.source_files        = "Friday_GeneralMacros/Friday_GeneralMacros", "Friday_GeneralMacros/Friday_GeneralMacros/**/*.{h,m}"
  	s.framework           = "UIKit"
end
