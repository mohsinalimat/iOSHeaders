//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUGarageDoorStateTransition : NSObject
{
    _Bool _fromOpenState;
    _Bool _toOpenState;
}

+ (id)transitionFromState:(_Bool)arg1 toState:(_Bool)arg2;
@property(nonatomic) _Bool toOpenState; // @synthesize toOpenState=_toOpenState;
@property(nonatomic) _Bool fromOpenState; // @synthesize fromOpenState=_fromOpenState;

@end
