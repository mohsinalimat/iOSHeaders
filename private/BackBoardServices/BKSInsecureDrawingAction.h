//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSArray;

@interface BKSInsecureDrawingAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *processIds;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithInsecureProcessIds:(id)arg1;

@end

