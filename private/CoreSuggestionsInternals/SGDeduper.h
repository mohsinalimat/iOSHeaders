//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGDeduper : NSObject
{
}

+ (id)splitContactDetailsByType:(id)arg1;
+ (id)dedupeContactDetails:(id)arg1;
+ (id)_dedupeGenericContactDetails:(id)arg1;
+ (id)_dedupePostalAddresses:(id)arg1;
+ (void)enumerateEKEventsForPseudoEventBySimilarTitleAndStartTime:(id)arg1 store:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (CDUnknownBlockType)resolveSGContactDetailsPreferringPhraseExtractionsAndLabels;
+ (CDUnknownBlockType)resolveByScoreBreakTiesArbitrarily:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)resolveByPairs:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)bucketerWithEqualityTest:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)bucketerWithLabeledBuckets:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)bucketerWithMapping:(CDUnknownBlockType)arg1;
+ (id)dedupe:(id)arg1 bucketer:(CDUnknownBlockType)arg2 resolver:(CDUnknownBlockType)arg3;

@end

