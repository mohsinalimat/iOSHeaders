//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSSet;

@interface FCHandlePushNotificationResult : NSObject <NSCopying>
{
    _Bool _handled;
    NSSet *_recordZones;
}

@property(retain, nonatomic) NSSet *recordZones; // @synthesize recordZones=_recordZones;
@property(nonatomic, getter=wasHandled) _Bool handled; // @synthesize handled=_handled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

