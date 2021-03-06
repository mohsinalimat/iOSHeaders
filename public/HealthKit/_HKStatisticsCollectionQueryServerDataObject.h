//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKStatisticsCollectionQueryServerDataObject : _HKQueryServerDataObject
{
    NSDate *_anchorDate;
    unsigned long long _options;
    NSDateComponents *_intervalComponents;
    unsigned long long _mergeStrategy;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(retain, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

