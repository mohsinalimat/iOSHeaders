//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat4 : TSDGLShaderQualifier
{
    struct CATransform3D _transform3D;
    struct CATransform3D _proposedTransform3D;
}

@property(nonatomic) struct CATransform3D proposedTransform3D; // @synthesize proposedTransform3D=_proposedTransform3D;
@property(readonly, nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform3D;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;
- (id)initWithTransform3D:(struct CATransform3D)arg1;

@end

