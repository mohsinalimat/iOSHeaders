//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject
{
}

@property(nonatomic) _Bool empty;
@property(retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) long long type;
@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *object;
- (id)initWithObject:(id)arg1 type:(long long)arg2;

@end

