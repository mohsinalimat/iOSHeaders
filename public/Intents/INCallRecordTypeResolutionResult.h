//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INCallRecordTypeResolutionResult : INIntentResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;
+ (id)confirmationRequiredWithCallRecordTypeToConfirm:(long long)arg1;
+ (id)successWithResolvedValue:(long long)arg1;
+ (id)successWithResolvedCallRecordType:(long long)arg1;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;

@end

