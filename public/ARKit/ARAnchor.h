//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class NSUUID;

@interface ARAnchor : NSObject <NSCopying>
{
    NSUUID *_identifier;
    // Error parsing type: {?="columns"[4]}, name: _transform
    // Error parsing type: {?="columns"[4]}, name: _referenceTransform
}

// Error parsing type for property referenceTransform:
// Property attributes: T{?=[4]},N,V_referenceTransform

// Error parsing type for property transform:
// Property attributes: T{?=[4]},N,V_transform

@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (id)_description:(_Bool)arg1;
- (_Bool)isEqualToAnchor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
-     // Error parsing type: @88@0:8@16{?=[4]}24, name: initWithIdentifier:transform:
-     // Error parsing type: @80@0:8{?=[4]}16, name: initWithTransform:

@end

