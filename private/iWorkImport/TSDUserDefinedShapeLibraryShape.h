//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDShapeCollectionShape-Protocol.h>

@class NSArray, NSString, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDUserDefinedShapeLibraryShape : NSObject <TSDShapeCollectionShape>
{
    NSString *_name;
    TSUBezierPath *_bezierPath;
    NSString *_bezierPathString;
    NSString *_identifier;
    unsigned long long _position;
}

@property(nonatomic) unsigned long long p_position; // @synthesize p_position=_position;
@property(readonly, nonatomic) NSString *p_identifier; // @synthesize p_identifier=_identifier;
@property(readonly, nonatomic) NSString *p_bezierPathString; // @synthesize p_bezierPathString=_bezierPathString;
@property(readonly, nonatomic) TSUBezierPath *p_bezierPath; // @synthesize p_bezierPath=_bezierPath;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *accessibilityName;
@property(readonly, nonatomic) int shapeType;
- (unsigned long long)positionInCategoryWithID:(id)arg1;
- (id)pathSourceWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSArray *keywords;
- (id)initWithIdentifier:(id)arg1 bezierPathString:(id)arg2 name:(id)arg3 position:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

