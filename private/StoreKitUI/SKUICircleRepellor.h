//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPhysicsBody;

@interface SKUICircleRepellor : NSObject
{
    double _bufferSize;
    struct CGPoint _center;
    PKPhysicsBody *_physicsBody;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) PKPhysicsBody *physicsBody; // @synthesize physicsBody=_physicsBody;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double bufferSize; // @synthesize bufferSize=_bufferSize;
- (void).cxx_destruct;
- (id)description;

@end

