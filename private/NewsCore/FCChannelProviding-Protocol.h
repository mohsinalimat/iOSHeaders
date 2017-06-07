//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCTagProviding-Protocol.h>

@class NSArray, NSString;

@protocol FCChannelProviding <FCTagProviding>
@property(readonly, nonatomic) _Bool isWhitelisted;
@property(readonly, nonatomic) _Bool supportsNotifications;
@property(readonly, copy, nonatomic) NSString *defaultSectionID;
@property(readonly, copy, nonatomic) NSArray *sectionIDs;
- (NSString *)paidFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
- (NSString *)freeFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
@end

