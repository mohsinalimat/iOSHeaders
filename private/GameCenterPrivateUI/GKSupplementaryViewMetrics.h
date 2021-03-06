//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterPrivateUI/NSCopying-Protocol.h>

@class NSString;

@interface GKSupplementaryViewMetrics : NSObject <NSCopying>
{
    _Bool _shouldPin;
    _Bool _hidden;
    _Bool _shouldUseGlobalIndexing;
    _Bool _shouldPinGlobal;
    double _desiredWidth;
    double _desiredHeight;
    NSString *_kind;
    Class _reusableViewClass;
    SEL _configurator;
    id _target;
    long long _animateWithSection;
    struct _NSRange _globalSectionRange;
}

+ (id)supplementaryMetrics;
@property(nonatomic) long long animateWithSection; // @synthesize animateWithSection=_animateWithSection;
@property(nonatomic) struct _NSRange globalSectionRange; // @synthesize globalSectionRange=_globalSectionRange;
@property(nonatomic) _Bool shouldPinGlobal; // @synthesize shouldPinGlobal=_shouldPinGlobal;
@property(nonatomic) _Bool shouldUseGlobalIndexing; // @synthesize shouldUseGlobalIndexing=_shouldUseGlobalIndexing;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) SEL configurator; // @synthesize configurator=_configurator;
@property(nonatomic) Class reusableViewClass; // @synthesize reusableViewClass=_reusableViewClass;
@property(retain, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(nonatomic) _Bool shouldPin; // @synthesize shouldPin=_shouldPin;
@property(nonatomic) double desiredHeight; // @synthesize desiredHeight=_desiredHeight;
@property(nonatomic) double desiredWidth; // @synthesize desiredWidth=_desiredWidth;
- (struct CGSize)sizeForCollectionView:(id)arg1;
- (id)description;
- (id)localDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

