//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolDebuggerLocation, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerCallFrame : RWIProtocolJSONObject
{
}

@property(nonatomic) _Bool isTailDeleted;
@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *thisObject;
@property(copy, nonatomic) NSArray *scopeChain;
@property(retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property(copy, nonatomic) NSString *functionName;
@property(copy, nonatomic) NSString *callFrameId;
- (id)initWithCallFrameId:(id)arg1 functionName:(id)arg2 location:(id)arg3 scopeChain:(id)arg4 thisObject:(id)arg5 isTailDeleted:(_Bool)arg6;

@end

