//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SKUITabularLockupColumn : NSObject
{
    NSMutableArray *_childViewElements;
    long long _identifier;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *childViewElements; // @synthesize childViewElements=_childViewElements;
- (void).cxx_destruct;
- (id)description;
- (void)_addChildViewElement:(id)arg1;
- (id)initWithColumnIdentifier:(long long)arg1;

@end

