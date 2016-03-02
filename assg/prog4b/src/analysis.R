data <- read.csv("scores.csv", header=TRUE);

sapply(data, mean);
sapply(data, sd);
cor(data);

model <- lm(data$total ~ data$initiative+data$extra);
plot(data$initiative+data$extra, data$total);
abline(model);

