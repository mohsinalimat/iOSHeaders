//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPRemoteCommand, NSString;

@protocol MPRemoteCommandDelegate_Private <NSObject>
- (_Bool)remoteCommand:(MPRemoteCommand *)arg1 isEnabledForContentItemIdentifier:(NSString *)arg2;
- (_Bool)remoteCommand:(MPRemoteCommand *)arg1 isSupportedForContentItemIdentifier:(NSString *)arg2;
@end

