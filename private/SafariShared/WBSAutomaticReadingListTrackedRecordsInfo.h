//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WBSAutomaticReadingListRecordRange;

@interface WBSAutomaticReadingListTrackedRecordsInfo : NSObject
{
    WBSAutomaticReadingListRecordRange *_rangeOfTrackedRecords;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) WBSAutomaticReadingListRecordRange *rangeOfTrackedRecords; // @synthesize rangeOfTrackedRecords=_rangeOfTrackedRecords;
- (void).cxx_destruct;

@end

