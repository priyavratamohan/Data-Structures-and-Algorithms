int find_first_occurrence(std::vector<int> arr, int target) {

    int left = 0, right = arr.size() - 1, target_index = -1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {

            target_index = mid;

            right = mid - 1;

        } else if (arr[mid] < target) {

            left = mid + 1;

        } else {

            right = mid - 1;

        }

    }

    return target_index;

}
