//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCH3DArray2D : NSObject
{
    tvec2_3b141483 mSize;
    NSMutableArray *mElements;
}

+ (id)array2D;
+ (id)array2DWithSize:(const tvec2_3b141483 *)arg1;
@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;
- (id).cxx_construct;
- (id)firstObject;
- (id)objectAtIndex:(const tvec2_3b141483 *)arg1;
- (void)setObject:(id)arg1 atIndex:(const tvec2_3b141483 *)arg2;
- (_Bool)hasObjectAtIndex:(const tvec2_3b141483 *)arg1;
- (void)resize:(const tvec2_3b141483 *)arg1;
- (void)dealloc;
- (id)initWithSize:(const tvec2_3b141483 *)arg1;

@end

