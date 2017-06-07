//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSSocialService, NSString;

@interface CLSRatingService : NSObject
{
    _Bool _internetRequired;
    CLSSocialService *_socialService;
    NSString *_name;
    float _weight;
}

+ (id)ratingServiceWithDefaultPlist;
+ (id)ratingService;
@property(nonatomic, getter=isInternetRequired) _Bool internetRequired; // @synthesize internetRequired=_internetRequired;
@property(nonatomic) float weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)usageRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)localRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)absoluteRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)rateForProperties:(id)arg1 withWeight:(float)arg2 andOperation:(id)arg3;
- (id)checklistsWithOperation:(id)arg1;
- (void)setWeightsAndLimits:(id)arg1;
- (id)checklistsOperationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)rateOperationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithWeightsAndLimits:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)init;

@end

