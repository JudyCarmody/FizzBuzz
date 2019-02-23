#!/usr/bin/env ruby

class FizzBuzz
	n = 1
	while n <= 100 do
		if n%15==0
			puts "FIZZBUZZ (#{n})"
		elsif n%3==0
			puts "FIZZ (#{n})"
		elsif n%5==0
			puts "BUZZ (#{n})"
		else puts n
		end
		n+=1
	end
end