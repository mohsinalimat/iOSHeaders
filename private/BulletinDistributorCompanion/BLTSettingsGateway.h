//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBSettingsGateway, NSLock;

@interface BLTSettingsGateway : NSObject
{
    BBSettingsGateway *_actualSettingsGateway;
    NSLock *_actualSettingsGatewayLock;
    int _token;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)surrogateWithQueue:(id)arg1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

