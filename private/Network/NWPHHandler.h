//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NWPHHandler : NSObject
{
    NSArray *_allowedEntitlementGroup;
    CDUnknownFunctionPointerType _handlerFunction;
}

@property CDUnknownFunctionPointerType handlerFunction; // @synthesize handlerFunction=_handlerFunction;
@property(retain) NSArray *allowedEntitlementGroup; // @synthesize allowedEntitlementGroup=_allowedEntitlementGroup;
- (void).cxx_destruct;
- (id)initWithHandlerFunction:(CDUnknownFunctionPointerType)arg1 allowedEntitlementGroup:(id)arg2;

@end

