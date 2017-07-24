//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, UIView;

@interface UIAccessibilityLocationDescriptor : NSObject
{
    UIView *_view;
    NSAttributedString *_attributedName;
    struct CGPoint _point;
}

@property(readonly, nonatomic) NSAttributedString *attributedName; // @synthesize attributedName=_attributedName;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)initWithAttributedName:(id)arg1 point:(struct CGPoint)arg2 inView:(id)arg3;
- (id)initWithName:(id)arg1 point:(struct CGPoint)arg2 inView:(id)arg3;
- (id)initWithName:(id)arg1 view:(id)arg2;

@end

