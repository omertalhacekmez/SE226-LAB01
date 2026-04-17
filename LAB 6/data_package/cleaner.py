def remove_duplicates(data_list):
    new_list = []
    for item in data_list:
        if item not in new_list:
            new_list.append(item)
    return new_list

def strip_whitespaces(string_list):
    new_list = []

    for item in string_list:
        new_list.append(item.strip())
    return new_list