uniform sampler2D  sTexture;

varying lowp    float  LightIntensity;
varying mediump vec2   TexCoord;

void main()
{
    gl_FragColor.rgb = texture2D(sTexture, TexCoord).rgb * LightIntensity;
}
