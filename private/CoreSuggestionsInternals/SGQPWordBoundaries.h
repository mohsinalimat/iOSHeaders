//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGQPWordBoundaries : NSObject
{
    struct vector<bool, std::__1::allocator<bool>> _left;
    struct vector<bool, std::__1::allocator<bool>> _right;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isWordAnchored:(struct _NSRange)arg1;
- (id)initWithString:(id)arg1;

@end

