//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXClassFactoryProtocol-Protocol.h>

@class NSString, SXAction;

@interface SXAddition : SXJSONObject <SXClassFactoryProtocol>
{
}

+ (id)typeString;
+ (void)initializeObject;
@property(readonly, nonatomic) SXAction *action;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct _NSRange range; // @dynamic range;
@property(readonly) Class superclass;

@end

