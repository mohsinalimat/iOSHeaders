//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/NSObject-Protocol.h>

@class IMBalloonPluginDataSource, NSString;

@protocol IMPluginChatItemProtocol <NSObject>
@property(readonly, nonatomic) _Bool isFromMe;
@property(readonly, retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property(readonly, retain, nonatomic) NSString *type;
@end
