//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/NSObject-Protocol.h>

@protocol ARSensorDelegate;

@protocol ARSensor <NSObject>
@property(nonatomic) __weak id <ARSensorDelegate> delegate;
- (void)stop;
- (void)start;
- (unsigned long long)providedDataTypes;

@optional
@property(nonatomic) unsigned long long powerUsage;
@end

