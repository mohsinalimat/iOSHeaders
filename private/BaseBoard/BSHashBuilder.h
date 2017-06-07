//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BSHashBuilder : NSObject
{
    unsigned long long _hash;
}

+ (id)builder;
- (void)_append:(unsigned long long)arg1;
- (id)appendRect:(struct CGRect)arg1;
- (id)appendSize:(struct CGSize)arg1;
- (id)appendPoint:(struct CGPoint)arg1;
- (id)appendCGFloat:(double)arg1;
- (id)appendFloat:(float)arg1;
- (id)appendDouble:(double)arg1;
- (id)appendUnsignedInteger:(unsigned long long)arg1;
- (id)appendInteger:(long long)arg1;
- (id)appendBool:(_Bool)arg1;
- (id)appendArray:(id)arg1;
- (id)appendPointer:(void *)arg1;
- (id)appendObject:(id)arg1;
- (id)appendHashingBlocks:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)init;

@end

