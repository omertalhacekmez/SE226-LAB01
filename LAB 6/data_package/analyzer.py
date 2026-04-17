def calculate_mean(num_list):
    mean = 0
    for item in num_list:
        mean += item + mean
    return mean / len(num_list)

def find_maximum(num_list):
    return max(num_list)

def find_minimum(num_list):
    return min(num_list)