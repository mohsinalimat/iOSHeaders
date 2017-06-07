//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIControlCenterButton;
@protocol CCUIControlCenterSystemAgent;

@protocol CCUIControlCenterButtonDelegate <NSObject>
- (id <CCUIControlCenterSystemAgent>)controlCenterSystemAgent;
- (_Bool)isInternal;
- (void)buttonTapped:(CCUIControlCenterButton *)arg1;

@optional
- (void)button:(CCUIControlCenterButton *)arg1 didChangeState:(long long)arg2;
@end

