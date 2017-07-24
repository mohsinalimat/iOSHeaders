//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct DataStore;

struct HDActivityCacheActiveSource {
    double _field1;
    long long _field2;
    vector_c1c297d2 _field3;
};

struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample;

struct HDActivityCacheStatisticsBuilderSample {
    double _field1;
    double _field2;
    double _field3;
    long long _field4;
};

struct HDActivityCacheStatisticsBuilderStandHourSample;

struct HDActivityCacheStatisticsBuilderWorkoutSample;

struct HDCumulativeSample;

struct HDCumulativeStatistics {
    double _sum;
    long long _count;
    double _startTime;
    double _endTime;
};

struct HDCumulativeStatisticsBucket {
    double _startTime;
    double _endTime;
    double _intervalDuration;
    vector_c1c297d2 _orderedSourceIDs;
    struct map<long long, std::__1::basic_string<char>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::basic_string<char>>>> _sourceIDToBundleIdentifier;
    struct HDCumulativeStatisticsInterval _currentInterval;
    long long _currentIntervalIndex;
    struct vector<HDCumulativeSample, std::__1::allocator<HDCumulativeSample>> _remainders;
    struct HDCumulativeStatistics _statistics;
    struct map<long long, HDCumulativeStatistics, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics>>> _statisticsBySourceID;
    struct map<std::__1::basic_string<char>, HDCumulativeStatistics, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, HDCumulativeStatistics>>> _statisticsBySourceBundleIdentifier;
};

struct HDCumulativeStatisticsEngine {
    long long _currentBucketIndex;
    struct HDCumulativeStatisticsBucket _currentBucket;
    struct vector<HDCumulativeSample, std::__1::allocator<HDCumulativeSample>> _remainders;
};

struct HDCumulativeStatisticsInterval {
    double _startTime;
    double _endTime;
    long long _sampleCount;
    struct map<long long, HDCumulativeStatistics, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics>>> _statisticsBySourceID;
};

struct HDDemoDataBloodPressure {
    double _field1;
    double _field2;
};

struct HDDemoDataHeartRate {
    double _field1;
    long long _field2;
};

struct HDDemoDataMenstrualFlow {
    long long _field1;
    long long _field2;
};

struct HDSyncAnchorRange {
    long long start;
    long long end;
};

struct _HDActivityCacheActiveSourceCalculatorSourceEvent {
    double _field1;
    long long _field2;
    long long _field3;
};

struct _HDDeleteObjectDataDefn {
    _Bool _field1;
    long long _field2;
    long long _field3;
    long long _field4;
};

struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*> *__next_;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> {
    unsigned int __x_;
};

struct map<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>, std::__1::less<_HKDataTypeCode>, std::__1::allocator<std::__1::pair<const _HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>>> {
    struct __tree<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>, std::__1::less<_HKDataTypeCode>, true>, std::__1::allocator<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>, std::__1::less<_HKDataTypeCode>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<long long, HDCumulativeStatistics, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics>>> {
    struct __tree<std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, HDCumulativeStatistics>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, HDCumulativeStatistics>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::less<long long>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>> {
    struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats>>> {
    struct __tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<long long, std::__1::basic_string<char>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::basic_string<char>>>> {
    struct __tree<std::__1::__value_type<long long, std::__1::basic_string<char>>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::basic_string<char>>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::basic_string<char>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::basic_string<char>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::basic_string<char>>, std::__1::less<long long>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, HDCumulativeStatistics, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, HDCumulativeStatistics>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct normal_distribution<double> {
    struct param_type __p_;
    double _V_;
    _Bool _V_hot_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct param_type {
    double __mean_;
    double __stddev_;
};

struct shared_ptr<health::DataStore> {
    struct DataStore *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *>> {
    struct __hash_table<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*> __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<sqlite3_stmt *>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<sqlite3_stmt *>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource>> {
    struct HDActivityCacheActiveSource *__begin_;
    struct HDActivityCacheActiveSource *__end_;
    struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource>> {
        struct HDActivityCacheActiveSource *__first_;
    } __end_cap_;
};

struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> {
    struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__begin_;
    struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__end_;
    struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> {
        struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__first_;
    } __end_cap_;
};

struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample>> {
    struct HDActivityCacheStatisticsBuilderSample *__begin_;
    struct HDActivityCacheStatisticsBuilderSample *__end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample>> {
        struct HDActivityCacheStatisticsBuilderSample *__first_;
    } __end_cap_;
};

struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> {
    struct HDActivityCacheStatisticsBuilderStandHourSample *__begin_;
    struct HDActivityCacheStatisticsBuilderStandHourSample *__end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> {
        struct HDActivityCacheStatisticsBuilderStandHourSample *__first_;
    } __end_cap_;
};

struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> {
    struct HDActivityCacheStatisticsBuilderWorkoutSample *__begin_;
    struct HDActivityCacheStatisticsBuilderWorkoutSample *__end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> {
        struct HDActivityCacheStatisticsBuilderWorkoutSample *__first_;
    } __end_cap_;
};

struct vector<HDCumulativeSample, std::__1::allocator<HDCumulativeSample>> {
    struct HDCumulativeSample *__begin_;
    struct HDCumulativeSample *__end_;
    struct __compressed_pair<HDCumulativeSample *, std::__1::allocator<HDCumulativeSample>> {
        struct HDCumulativeSample *__first_;
    } __end_cap_;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    double _field3;
} CDStruct_00a825b0;

typedef struct {
    unsigned int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_9f2792e4;

typedef struct {
    long long *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_5df41632;

typedef struct {
    double _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
} CDStruct_0714bc26;

typedef struct {
    double avg;
    double max;
    double min;
    unsigned long long count;
} CDStruct_23c51cd0;

typedef struct {
    long long majorVersion;
    long long minorVersion;
    long long patchVersion;
} CDStruct_f6aba300;

typedef struct {
    long long _field1;
    long long _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    long long _field8;
    long long _field9;
    long long _field10;
    long long _field11;
    double _field12;
    double _field13;
    CDStruct_00a825b0 _field14;
    CDStruct_00a825b0 _field15;
    CDStruct_00a825b0 _field16;
    _Bool _field17;
    _Bool _field18;
    double _field19;
} CDStruct_75d5e9a1;

// Ambiguous groups
typedef struct {
    unsigned int requestType:1;
} CDStruct_7c66fec0;

typedef struct {
    unsigned int timestamp:1;
} CDStruct_b5306035;

typedef struct {
    unsigned int value:1;
} CDStruct_01ef6375;

typedef struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>> {
    struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_c63dce6d;

typedef struct shared_ptr<health::DataStore> {
    struct DataStore *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_88ae0538;

typedef struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource>> {
    struct HDActivityCacheActiveSource *__begin_;
    struct HDActivityCacheActiveSource *__end_;
    struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource>> {
        struct HDActivityCacheActiveSource *__first_;
    } __end_cap_;
} vector_6dc0ebed;

typedef struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> {
    struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__begin_;
    struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__end_;
    struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> {
        struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__first_;
    } __end_cap_;
} vector_4f6645df;

typedef struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample>> {
    struct HDActivityCacheStatisticsBuilderSample *__begin_;
    struct HDActivityCacheStatisticsBuilderSample *__end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample>> {
        struct HDActivityCacheStatisticsBuilderSample *__first_;
    } __end_cap_;
} vector_e4bf223f;

typedef struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> {
    struct HDActivityCacheStatisticsBuilderStandHourSample *__begin_;
    struct HDActivityCacheStatisticsBuilderStandHourSample *__end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> {
        struct HDActivityCacheStatisticsBuilderStandHourSample *__first_;
    } __end_cap_;
} vector_81c32433;

typedef struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> {
    struct HDActivityCacheStatisticsBuilderWorkoutSample *__begin_;
    struct HDActivityCacheStatisticsBuilderWorkoutSample *__end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> {
        struct HDActivityCacheStatisticsBuilderWorkoutSample *__first_;
    } __end_cap_;
} vector_53e1d725;

typedef struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__first_;
    } __end_cap_;
} vector_c1c297d2;

