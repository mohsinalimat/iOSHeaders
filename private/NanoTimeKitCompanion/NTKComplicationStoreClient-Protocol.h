//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class CLKComplicationTemplate, NSDictionary, NSNumber, NSString;

@protocol NTKComplicationStoreClient <NSObject>
- (void)removeComplicationForClientIdentifier:(NSString *)arg1 seqId:(NSNumber *)arg2;
- (void)updateLocalizableSampleTemplate:(CLKComplicationTemplate *)arg1 forClientIdentifier:(NSString *)arg2 family:(long long)arg3 seqId:(NSNumber *)arg4;
- (void)loadFullCollectionWithLocalizableSampleTemplates:(NSDictionary *)arg1 seqId:(NSNumber *)arg2;
@end

