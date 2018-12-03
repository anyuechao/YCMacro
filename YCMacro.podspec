Pod::Spec.new do |s|
s.name = "YCMacro"
s.authors = "anyuechao"
s.homepage = "https://github.com/anyuechao/YCMacro.git"
s.summary = "YCMacro"
s.version = "1.0.0"
#s.platform = :ios, "8.0"
s.source = { :git => "https://github.com/anyuechao/YCMacro.git", :tag => s.version }

s.requires_arc     = true
s.ios.deployment_target = '8.0'
s.public_header_files = 'YCMacro/YCMacro.h'
s.source_files = 'YCMacro/Source/**/*.{h,m}'

end
