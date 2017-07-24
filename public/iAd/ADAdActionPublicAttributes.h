//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/NSSecureCoding-Protocol.h>

@class ADMRAIDAction, NSString;

@interface ADAdActionPublicAttributes : NSObject <NSSecureCoding>
{
    _Bool _actionLeavesApplication;
    _Bool _actionViewControllerHidesStatusBar;
    int _action;
    int _transitionType;
    unsigned long long _actionViewControllerPresentationOrientationMask;
    long long _modalPresentationStyle;
    NSString *_actionURLString;
    ADMRAIDAction *_MRAIDAction;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) ADMRAIDAction *MRAIDAction; // @synthesize MRAIDAction=_MRAIDAction;
@property(copy, nonatomic) NSString *actionURLString; // @synthesize actionURLString=_actionURLString;
@property(nonatomic) int transitionType; // @synthesize transitionType=_transitionType;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) _Bool actionViewControllerHidesStatusBar; // @synthesize actionViewControllerHidesStatusBar=_actionViewControllerHidesStatusBar;
@property(nonatomic) unsigned long long actionViewControllerPresentationOrientationMask; // @synthesize actionViewControllerPresentationOrientationMask=_actionViewControllerPresentationOrientationMask;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) _Bool actionLeavesApplication; // @synthesize actionLeavesApplication=_actionLeavesApplication;
- (id)_actionDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

