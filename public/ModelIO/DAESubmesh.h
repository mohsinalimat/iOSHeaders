//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DAESubmeshPrimitives, NSArray, NSString;

@interface DAESubmesh : NSObject
{
    long long _count;
    NSString *_material;
    NSArray *_inputs;
    DAESubmeshPrimitives *_primitives;
}

@property(retain, nonatomic) DAESubmeshPrimitives *primitives; // @synthesize primitives=_primitives;
@property(retain, nonatomic) NSArray *inputs; // @synthesize inputs=_inputs;
@property(retain, nonatomic) NSString *material; // @synthesize material=_material;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;

@end

