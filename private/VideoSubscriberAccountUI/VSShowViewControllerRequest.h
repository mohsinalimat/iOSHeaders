//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VSOptional;

__attribute__((visibility("hidden")))
@interface VSShowViewControllerRequest : NSObject
{
    _Bool _animated;
    unsigned long long _operation;
    VSOptional *_viewController;
}

@property(retain, nonatomic) VSOptional *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

