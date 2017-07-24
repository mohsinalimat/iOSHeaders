//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class HKWorkout, HKWorkoutDurationNumberFormatter, NSDateComponentsFormatter;

@interface HKDataMetadataWorkoutEventSection : HKDataMetadataSection
{
    HKWorkout *_workout;
    NSDateComponentsFormatter *_dateFormatter;
    HKWorkoutDurationNumberFormatter *_durationFormatter;
}

@property(retain, nonatomic) HKWorkoutDurationNumberFormatter *durationFormatter; // @synthesize durationFormatter=_durationFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) HKWorkout *workout; // @synthesize workout=_workout;
- (void).cxx_destruct;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (id)initWithSample:(id)arg1;

@end

