// C++ STL Complete Cheat Sheet for IUPC
// For IUPC and competitive programming, you should know the most useful functions of C++ STL (Standard Template Library). Below is a contest-focused reference with syntax, examples, and complexity.
// STL is divided into containers, algorithms, iterators, and utility classes. You don't need to memorize every library function, but you should be comfortable with the following.
// 1. STL Algorithms — #include <bits/stdc++.h>
// These functions work with arrays, vectors, strings, and other compatible containers.
// Function	Purpose	Time
// sort(a.begin(), a.end())	Sort ascending	\(O(n\log n)\)
// reverse(a.begin(), a.end())	Reverse order	\(O(n)\)
// *max_element(a.begin(), a.end())	Maximum element	\(O(n)\)
// *min_element(a.begin(), a.end())	Minimum element	\(O(n)\)
// accumulate(a.begin(), a.end(), 0LL)	Sum elements	\(O(n)\)
// count(a.begin(), a.end(), x)	Count occurrences	\(O(n)\)
// find(a.begin(), a.end(), x)	Find an element	\(O(n)\)
// binary_search(a.begin(), a.end(), x)	Check existence in sorted range	\(O(\log n)\)
// lower_bound(a.begin(), a.end(), x)	First element \(\ge x\)	\(O(\log n)\)
// upper_bound(a.begin(), a.end(), x)	First element \(>x\)	\(O(\log n)\)
// unique(a.begin(), a.end())	Move consecutive duplicates to the end	\(O(n)\)
// next_permutation(a.begin(), a.end())	Generate next permutation	\(O(n)\) per call
// prev_permutation(a.begin(), a.end())	Generate previous permutation	\(O(n)\) per call
// nth_element(a.begin(), a.begin()+k, a.end())	Place the kth element in sorted position	Average \(O(n)\)
// is_sorted(a.begin(), a.end())	Check sorted order	\(O(n)\)
// Example:

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> a = {5, 2, 8, 2, 1};

//     sort(a.begin(), a.end());

//     cout << a.front() << '\n'; // Minimum
//     cout << a.back() << '\n';  // Maximum
//     cout << count(a.begin(), a.end(), 2) << '\n';

//     cout << lower_bound(a.begin(), a.end(), 5)
//                     - a.begin() << '\n';

//     return 0;
// }



// Important: lower_bound() and upper_bound() require sorted data for their usual binary-search behavior. unique() removes consecutive duplicates logically; use erase() to remove the extra elements from a vector.
// 2. vector — Dynamic array
// vector<int> v = {10, 20, 30};


// Function	Meaning
// v.push_back(x)	Add at end
// v.pop_back()	Remove last
// v.size()	Number of elements
// v.empty()	Check if empty
// v.front()	First element
// v.back()	Last element
// v[i]	Access by index
// v.at(i)	Bounds-checked access
// v.clear()	Remove all elements
// v.resize(n)	Change size
// v.assign(n, x)	Fill with n copies of x
// v.insert(it, x)	Insert before iterator
// v.erase(it)	Remove element
// v.erase(l, r)	Remove range [l, r)
// v.begin() / v.end()	Forward iterator range
// v.rbegin() / v.rend()	Reverse iterator range
// v.capacity()	Allocated capacity
// v.reserve(n)	Request capacity of at least n
// v.shrink_to_fit()	Request reduced capacity
// v.emplace_back(x)	Construct an element at the end
// v.swap(other)	Exchange contents
// 3. string — String operations
// string s = "programming";


// Function	Meaning
// s.size() / s.length()	String length
// s.empty()	Check empty
// s[i] / s.at(i)	Access character
// s.front() / s.back()	First/last character
// s.push_back(c)	Append character
// s.pop_back()	Remove last character
// s.append(t)	Append string
// s += t	Concatenate
// s.substr(pos, len)	Extract substring
// s.find(t)	Find first occurrence
// s.rfind(t)	Find last occurrence
// s.find_first_of(t)	Find first matching character
// s.find_first_not_of(t)	Find first character not in set
// s.replace(pos, len, t)	Replace substring
// s.insert(pos, t)	Insert string
// s.erase(pos, len)	Remove substring
// s.compare(t)	Lexicographically compare
// s.c_str()	Get C-style string
// stoi(s) / stoll(s)	Convert to integer
// to_string(x)	Convert number to string
// Important: find() returns string::npos if no match is found.
// if (s.find("gram") != string::npos)
//     cout << "Found\n";


// 4. set and multiset
// set<int> s;       // Unique, sorted values
// multiset<int> ms; // Sorted, duplicates allowed


// Function	Meaning
// s.insert(x)	Insert value
// s.erase(x)	Remove all matching keys
// s.erase(it)	Remove one element at iterator
// s.find(x)	Find value
// s.count(x)	Number of occurrences
// s.lower_bound(x)	First value >= x
// s.upper_bound(x)	First value > x
// s.equal_range(x)	Pair of lower/upper bounds
// s.size()	Number of elements
// s.empty()	Check empty
// s.clear()	Remove all
// s.begin() / s.end()	Iterate in sorted order
// s.rbegin() / s.rend()	Iterate in reverse
// s.contains(x)	Check membership (C++20)
// Complexity: typically \(O(\log n)\) for insertion, lookup, and deletion by key. In a multiset, erase(x) removes every copy; use erase(ms.find(x)) to remove only one copy.
// 5. map and unordered_map
// map<int, string> mp;           // Sorted keys
// unordered_map<int, string> ump; // Hash-based keys


// Function	Meaning
// mp[key] = value	Insert/update
// mp.at(key)	Access existing key with bounds checking
// mp.insert({key, value})	Insert a key-value pair
// mp.emplace(key, value)	Construct entry
// mp.find(key)	Find key
// mp.count(key)	Check/count matching keys
// mp.contains(key)	Check membership (C++20)
// mp.erase(key)	Delete key
// mp.size()	Number of entries
// mp.empty()	Check empty
// mp.clear()	Remove all entries
// mp.lower_bound(key)	First key >= key (map only)
// mp.upper_bound(key)	First key > key (map only)
// mp.try_emplace(key, value)	Construct only if absent
// mp.insert_or_assign(key, value)	Insert or replace
// mp[key]	Access or insert default value
// Complexities:
// - map: \(O(\log n)\) for search, insertion, and deletion.
// - unordered_map: average \(O(1)\), worst-case \(O(n)\).
// IUPC tip: Use unordered_map for frequency counting when ordering is unnecessary. Use map when you need sorted keys.
// 6. stack, queue, and deque
// Stack — LIFO
// Last In, First Out
// stack<int> st;
// st.push(10);
// st.emplace(20);
// st.top();    // 20
// st.pop();
// st.size();
// st.empty();



// Queue — FIFO
// First In, First Out
// queue<int> q;
// q.push(10);
// q.emplace(20);
// q.front();   // 10
// q.back();    // 20
// q.pop();
// q.size();
// q.empty();



// Deque — Double-ended queue
// deque<int> d;
// d.push_back(10);
// d.push_front(5);
// d.pop_back();
// d.pop_front();
// d.front();
// d.back();
// d[i];
// d.size();
// d.empty();
// d.clear();



// 7. priority_queue — Heap
// priority_queue<int> mx; // Max-heap
// priority_queue<int, vector<int>, greater<int>> mn; // Min-heap


// Function	Meaning
// pq.push(x)	Insert
// pq.emplace(x)	Construct and insert
// pq.top()	Highest-priority element
// pq.pop()	Remove top
// pq.size()	Number of elements
// pq.empty()	Check empty
// pq.swap(other)	Swap heaps
// For a max-heap, the largest element comes first. For a min-heap, the smallest element comes first.
// - top(): \(O(1)\)
// - push() and pop(): \(O(\log n)\)
// 8. Other useful STL containers
// Container	Important functions
// array<T,N>	size, fill, front, back, at, data
// list<T>	push_front, push_back, pop_front, pop_back, sort, remove, unique, splice
// forward_list<T>	push_front, pop_front, insert_after, erase_after, remove, sort
// multimap<K,V>	insert, find, equal_range, lower_bound, upper_bound, erase
// unordered_set<T>	insert, find, count, erase, contains, reserve, rehash
// unordered_multiset<T>	insert, find, count, equal_range, erase
// unordered_multimap<K,V>	insert, find, count, equal_range, erase
// pair<T,U>	first, second, make_pair
// tuple<T...>	get<I>(t), make_tuple, tie, tuple_size
// bitset<N>	set, reset, flip, test, count, any, none, all, to_string, to_ulong
// Official container reference: C++ containers reference. 

// cppreference.com
// +1



// 9. More important STL algorithms
// Function	Purpose
// all_of(first, last, pred)	All elements satisfy condition
// any_of(first, last, pred)	At least one satisfies condition
// none_of(first, last, pred)	No elements satisfy condition
// for_each(first, last, fn)	Apply function to each element
// copy(first, last, dest)	Copy range
// fill(first, last, x)	Fill range with value
// replace(first, last, old, new)	Replace matching values
// remove(first, last, x)	Move matching values to removable tail
// remove_if(first, last, pred)	Remove logically by condition
// partition(first, last, pred)	Group elements by condition
// stable_sort(first, last)	Sort while preserving equal-element order
// inplace_merge(first, mid, last)	Merge two sorted adjacent ranges
// merge(a1, a2, b)	Merge sorted ranges into output
// set_union(a1, a2, b)	Sorted set union
// set_intersection(a1, a2, b)	Sorted intersection
// set_difference(a1, a2, b)	Elements in first but not second
// minmax_element(first, last)	Find minimum and maximum iterators
// clamp(x, lo, hi)	Restrict value to a range (C++17)
// rotate(first, middle, last)	Rotate a range
// shuffle(first, last, rng)	Randomly shuffle
// is_permutation(a1, a2)	Check whether ranges have the same multiset of values
// equal(a1, a2)	Compare ranges
// lexicographical_compare(a1, a2)	Lexicographic range comparison
// Example: remove duplicates from a vector.
// sort(v.begin(), v.end());
// v.erase(unique(v.begin(), v.end()), v.end());


// Example: sort in descending order.
// sort(v.begin(), v.end(), greater<int>());


// 10. Numeric STL functions — <numeric>
// Function	Purpose
// accumulate(begin, end, init)	Sum or accumulate values
// iota(begin, end, start)	Fill with increasing values
// partial_sum(begin, end, out)	Prefix sums
// adjacent_difference(begin, end, out)	Differences between adjacent values
// inner_product(a1, a2, init)	Dot product by default
// gcd(a, b)	Greatest common divisor (C++17)
// lcm(a, b)	Least common multiple (C++17)
// vector<int> v = {1, 2, 3, 4};

// long long sum = accumulate(v.begin(), v.end(), 0LL);

// int g = gcd(12, 18); // 6
// int l = lcm(4, 6);   // 12

// vector<int> pref(4);
// partial_sum(v.begin(), v.end(), pref.begin());
// // pref = {1, 3, 6, 10}


// 11. Iterators and utility functions
// Function	Purpose
// begin(c) / end(c)	Range boundaries
// rbegin(c) / rend(c)	Reverse range
// next(it)	Advance iterator copy
// prev(it)	Move iterator copy backward
// advance(it, n)	Move iterator in place
// distance(a, b)	Distance between iterators
// make_pair(a, b)	Construct a pair
// make_tuple(a, b, c)	Construct a tuple
// tie(a, b)	Bind tuple elements to variables
// swap(a, b)	Exchange values
// exchange(a, b)	Replace value and return old value (C++14)
// move(x)	Enable move semantics
// min(a, b) / max(a, b)	Compare two values
// minmax(a, b)	Return both extremes
// 12. Sorting custom structures
// This is especially useful in IUPC problems involving intervals, students, pairs, or multiple sorting conditions.
// vector<pair<int,int>> v = {
//     {2, 5}, {1, 8}, {2, 3}
// };

// // Sort by first, then second
// sort(v.begin(), v.end());

// // Custom comparator
// sort(v.begin(), v.end(),
//      [](auto a, auto b) {
//          if (a.second != b.second)
//              return a.second < b.second;
//          return a.first < b.first;
//      });


// The comparator must define a strict ordering; avoid using <= in place of <.
// 13. Bit manipulation — essential for IUPC
// Expression	Purpose
// x & (1LL << k)	Check whether bit k is set
// x \| (1LL << k)	Set bit k
// x & ~(1LL << k)	Clear bit k
// x ^ (1LL << k)	Toggle bit k
// __builtin_popcount(x)	Count set bits in unsigned int
// __builtin_popcountll(x)	Count set bits in unsigned long long
// __builtin_clz(x)	Count leading zeros in nonzero unsigned integer
// __builtin_ctz(x)	Count trailing zeros in nonzero unsigned integer
// std::has_single_bit(x)	Check if positive unsigned value is a power of two (C++20)
// std::popcount(x)	Count set bits for unsigned integer types (C++20)
// Warning: __builtin_clz(0) and __builtin_ctz(0) have undefined behavior. Use the appropriate unsigned type.
// 14. Quick STL complexity reference
// Data structure / operation	Typical complexity
// vector[i]	\(O(1)\)
// vector.push_back()	Amortized \(O(1)\)
// vector.insert() in middle	\(O(n)\)
// sort()	\(O(n\log n)\)
// set.find()	\(O(\log n)\)
// map.find()	\(O(\log n)\)
// unordered_map.find()	Average \(O(1)\)
// priority_queue.push()	\(O(\log n)\)
// lower_bound() on a sorted vector	\(O(\log n)\)
// find() on a vector	\(O(n)\)
// accumulate()	\(O(n)\)
// 15. What to memorize first for IUPC