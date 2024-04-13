# frozen_string_literal: true

class AssemblyLine
  CARS_PER_HOUR = 221

  def initialize(speed)
    @speed = speed
    @success_rate = case @speed
                    when 10
                      0.77
                    when 9
                      0.80
                    when 5..8
                      0.90
                    else
                      1.00
                    end
  end

  def production_rate_per_hour
    @speed * CARS_PER_HOUR * @success_rate
  end

  def working_items_per_minute
    (production_rate_per_hour / 60).to_i
  end
end
