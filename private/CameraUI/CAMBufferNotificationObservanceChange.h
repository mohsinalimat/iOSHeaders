//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMBufferObservanceChange.h>

@class NSObject, NSString;

@interface CAMBufferNotificationObservanceChange : CAMBufferObservanceChange
{
    NSString *_notification;
    NSObject *_object;
}

@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSString *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (id)initWithNotification:(id)arg1 object:(id)arg2;

@end

