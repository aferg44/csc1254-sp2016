# Read the data file into a data matrix called 'data'
data <- read.csv("scores.csv", header=TRUE);

# Find the mean and standard deviation of the total score only
mean(data$total);
sd(data$total);

# Apply min, median, max to all columns of data
sapply(data, min);
sapply(data, median);
sapply(data, max);

# Uncomment this to see a histogram for initiative scores
  # hist(data$initiative);

# Uncomment this to see a plot of total vs. extra credit
  # model <- lm(data$total ~ data$initiative+data$extra);
  # plot(data$initiative+data$extra, data$total);
  # abline(model);
