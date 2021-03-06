//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface IKCSSDeclarationList : NSObject <NSCopying>
{
    NSMutableArray *_declarations;
    struct _NSRange _range;
}

@property(readonly, nonatomic) NSMutableArray *declarations; // @synthesize declarations=_declarations;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)lastDeclaration;
- (id)firstDeclaration;
- (id)declarationAtIndex:(unsigned long long)arg1;
- (void)addDeclaration:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

