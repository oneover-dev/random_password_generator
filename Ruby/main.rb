print "Enter password length: "
length = gets.to_i

if length <= 0
  puts "Length must be greater than 0"
  exit
end

chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}<>?/|"
password = ""

length.times do
  password += chars[rand(chars.size)]
end

puts password
