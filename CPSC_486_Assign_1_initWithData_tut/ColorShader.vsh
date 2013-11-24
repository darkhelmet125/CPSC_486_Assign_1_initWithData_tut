attribute vec3 positionVertex;

void main()
{
    gl_Position = gl_ModelViewProjectMatrix*vec4(positionVertex, 1.0);
}