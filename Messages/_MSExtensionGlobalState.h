//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _MSMessageAppExtensionContext;

@interface _MSExtensionGlobalState : NSObject
{
    _MSMessageAppExtensionContext *_activeExtensionContext;
}

+ (id)sharedInstance;
@property(nonatomic) __weak _MSMessageAppExtensionContext *activeExtensionContext; // @synthesize activeExtensionContext=_activeExtensionContext;
- (void).cxx_destruct;

@end
